//
//  ClassUtil.m
//  SettingAutoClickLibrary
//
//  Created by 刘大志 on 2017/7/24.
//
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ClassUtil.h"
// OC没有类的静态成员变量，只有类的成员方法。
@implementation ClassUtil

+ (void)getPrivateVars:(id)object isShow:(BOOL)show {
	if (!show) {
		NSLog(@"不打印getPrivateVars");
		return;
	}
	unsigned  int count = 0;
	Ivar *members = class_copyIvarList([object class], &count);
	for (int i = 0; i < count; i++){
		Ivar var = members[i];
		
		const char *member = ivar_getName(var);
		NSLog(@"属性名 = %s ;",member);
	}
	free(members);
}

+ (void)getMethod:(id)object isShow:(BOOL)show {
	if (!show) {
		NSLog(@"不打印getMethod");
		return;
	}
	
	unsigned int outCount = 0;
	Method *methodList = class_copyMethodList([object class], &outCount);
	for (unsigned int i = 0; i < outCount; ++i) {
		Method method = methodList[i];
		SEL methodName = method_getName(method);
		//char returnType[512] = {};
		//method_getReturnType(method, returnType, 512);
		char * returnType = method_copyReturnType(method);
		NSLog(@"方法名：%@ ,返回值类型：%s", NSStringFromSelector(methodName), returnType);
		// 获取方法的参数类型
		unsigned int argumentsCount = method_getNumberOfArguments(method);
		//char argName[512] = {};
		for (unsigned int j = 0; j < argumentsCount; ++j) {
			//method_getArgumentType(method, j, argName, 512);
			char * argumentType =  method_copyArgumentType(method, j);
			NSLog(@"第%u个参数类型为：%s", j, argumentType);
		}
	}
	free(methodList);
}

+ (void)getPublicVars:(id)object isShow:(BOOL)show {
	if (!show) {
		NSLog(@"不打印getPublicVars");
		return;
	}
	u_int count = 0;
	objc_property_t *properties = class_copyPropertyList([object class], &count);
	for (int i = 0; i<count; i++){
		const char* propertyName =property_getName(properties[i]);
		NSLog(@"公共属性名 = %@ ;",[NSString stringWithUTF8String: propertyName]);
	}
	free(properties);
}

+ (id)getPublicVarsFromKey:(id)object fromKey:(id)key {
	u_int count = 0;
	objc_property_t *properties = class_copyPropertyList([object class], &count);
	for (int i = 0; i< count; i++){
		const char* propertyName =property_getName(properties[i]);
		NSString *str = [NSString stringWithUTF8String: propertyName];
		if ([str isEqualToString:key]) {
			NSLog(@"========>属性名 :%@",str);
			id propertyValue = [self valueForKey:(NSString *)str];
			NSLog(@"========>属性值 :%@",propertyValue);
			free(properties);
			return propertyValue;
		}
	}
	free(properties);
	return nil;
}

+ (void)isShowParent:(id)object isShow:(BOOL)show {
	if (!show) {
		NSLog(@"不打印类: %@ 的父类 %@",NSStringFromClass([object class]),NSStringFromClass([object superclass]));
		return;
	}

	Class parentClass = [object superclass];
	if([NSStringFromClass(parentClass) isEqualToString:@"NSObject"]){
		NSLog(@"这个类是NSOject类型的，可以到此为止了");
		return;
	}

	id parent = [parentClass new];
	[ClassUtil showClassInfo:parent isShow:show];
}

+ (void)showClassInfo:(id)object isShow:(BOOL)show {
	NSLog(@"=========================打印日志开始========================");
	NSLog(@"当前类名 : %@",NSStringFromClass([object class]));
	[ClassUtil getPrivateVars:object isShow:YES];
	[ClassUtil getMethod:object isShow:YES];
	[ClassUtil getPublicVars:object isShow:YES];
	[ClassUtil isShowParent:object isShow:show];
	NSLog(@"=========================打印日志结束=========================");
}

@end
