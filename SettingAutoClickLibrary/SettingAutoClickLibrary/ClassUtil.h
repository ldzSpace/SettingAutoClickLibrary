//
//  ClassUtil.h
//  SettingAutoClickLibrary
//
//  Created by 刘大志 on 2017/7/24.
//
//

#ifndef ClassUtil_h
#define ClassUtil_h

@interface ClassUtil : NSObject

+ (void)getPrivateVars:(id)object isShow:(BOOL)show;
+ (void)getMethod:(id)object isShow:(BOOL)show;
+ (void)getPublicVars:(id)object isShow:(BOOL)show;
+ (void)isShowParent:(id)object isShow:(BOOL)isShow;
+ (void)showClassInfo:(id)object isShow:(BOOL)isShow;
+ (id)getPublicVarsFromKey:(id)object fromKey:(id)key;
@end

#endif /* ClassUtil_h */
