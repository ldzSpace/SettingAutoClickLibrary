#line 1 "/Users/liudazhi/iosprojects/SettingAutoClickLibrary/SettingAutoClickLibrary/SettingAutoClickLibrary.xm"
#import <UIKit/UIKit.h>
#import "PSUIPrefsListController.h"
#import "ClassUtil.h"



#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class PSListController; @class PSUIPrefsListController; @class UIAlertController; 
static void (*_logos_orig$_ungrouped$PSUIPrefsListController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL PSUIPrefsListController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$PSUIPrefsListController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL PSUIPrefsListController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$PSListController$viewDidAppear$)(_LOGOS_SELF_TYPE_NORMAL PSListController* _LOGOS_SELF_CONST, SEL, BOOL); static void _logos_method$_ungrouped$PSListController$viewDidAppear$(_LOGOS_SELF_TYPE_NORMAL PSListController* _LOGOS_SELF_CONST, SEL, BOOL); static UITableView * _logos_method$_ungrouped$PSListController$logViewHierarchy(_LOGOS_SELF_TYPE_NORMAL PSListController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$UIAlertController$viewDidAppear$)(_LOGOS_SELF_TYPE_NORMAL UIAlertController* _LOGOS_SELF_CONST, SEL, BOOL); static void _logos_method$_ungrouped$UIAlertController$viewDidAppear$(_LOGOS_SELF_TYPE_NORMAL UIAlertController* _LOGOS_SELF_CONST, SEL, BOOL); static UITableView * _logos_method$_ungrouped$UIAlertController$logViewHierarchy(_LOGOS_SELF_TYPE_NORMAL UIAlertController* _LOGOS_SELF_CONST, SEL); 

#line 6 "/Users/liudazhi/iosprojects/SettingAutoClickLibrary/SettingAutoClickLibrary/SettingAutoClickLibrary.xm"


static void _logos_method$_ungrouped$PSUIPrefsListController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL PSUIPrefsListController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	_logos_orig$_ungrouped$PSUIPrefsListController$viewDidLoad(self, _cmd);
	NSLog(@"=============tt=============>");
	
	NSIndexPath *indexPath = [NSIndexPath indexPathForRow:1 inSection:3];
	[self tableView:self.table didSelectRowAtIndexPath: indexPath];
}






static void _logos_method$_ungrouped$PSListController$viewDidAppear$(_LOGOS_SELF_TYPE_NORMAL PSListController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, BOOL animated) {
	_logos_orig$_ungrouped$PSListController$viewDidAppear$(self, _cmd, animated);
	
    NSString *selfClass = NSStringFromClass([self class]);
	NSLog(@"========================当前类名=>%@",selfClass);
	NSString * str = @"StoreSettingsController";
	if ([str isEqualToString:selfClass]) {
		NSLog(@"==================成功=========>");
		UITableView * table = [self logViewHierarchy];
		NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:0];
		
		if (table == nil){
			NSLog(@"==================nil=========>");
			return;
		}
		[self tableView:table didSelectRowAtIndexPath: indexPath];
	}
}


static UITableView * _logos_method$_ungrouped$PSListController$logViewHierarchy(_LOGOS_SELF_TYPE_NORMAL PSListController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	NSLog(@"%@", self);
	UIViewController * baseController =(UIViewController *) self;
	for (UIView *subview in baseController.view.subviews){
		if ([subview isKindOfClass:[UITableView class]]) {
			NSLog(@"找到相关的对象");
			return(UITableView *) subview;
		}
	}
	NSLog(@"抱歉没找到的对象");
	return nil;
}





static void _logos_method$_ungrouped$UIAlertController$viewDidAppear$(_LOGOS_SELF_TYPE_NORMAL UIAlertController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, BOOL animated) {
	_logos_orig$_ungrouped$UIAlertController$viewDidAppear$(self, _cmd, animated);
	NSLog(@"弹框已经弹出");
	
	
	[self _actionSelected:self.actions[1]];
}


static UITableView * _logos_method$_ungrouped$UIAlertController$logViewHierarchy(_LOGOS_SELF_TYPE_NORMAL UIAlertController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	NSLog(@"%@", self);
	UIAlertController * baseController =(UIAlertController *) self;
	for (UIView *subview in baseController.view.subviews){
		if ([subview isKindOfClass:[UITableView class]]) {
			NSLog(@"找到相关的对象");
			return(UITableView *) subview;
		}
	}
	unsigned  int count = 0;
	Ivar *members = class_copyIvarList([self class], &count);
	for (int i = 0; i < count; i++){
		Ivar var = members[i];
		
		const char *member = ivar_getName(var);
		NSLog(@"属性名 = %s ;",member);
	}
	free(members);
	NSLog(@"抱歉没找到的对象");
	return nil;
}




static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$PSUIPrefsListController = objc_getClass("PSUIPrefsListController"); MSHookMessageEx(_logos_class$_ungrouped$PSUIPrefsListController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$PSUIPrefsListController$viewDidLoad, (IMP*)&_logos_orig$_ungrouped$PSUIPrefsListController$viewDidLoad);Class _logos_class$_ungrouped$PSListController = objc_getClass("PSListController"); MSHookMessageEx(_logos_class$_ungrouped$PSListController, @selector(viewDidAppear:), (IMP)&_logos_method$_ungrouped$PSListController$viewDidAppear$, (IMP*)&_logos_orig$_ungrouped$PSListController$viewDidAppear$);{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(UITableView *), strlen(@encode(UITableView *))); i += strlen(@encode(UITableView *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$PSListController, @selector(logViewHierarchy), (IMP)&_logos_method$_ungrouped$PSListController$logViewHierarchy, _typeEncoding); }Class _logos_class$_ungrouped$UIAlertController = objc_getClass("UIAlertController"); MSHookMessageEx(_logos_class$_ungrouped$UIAlertController, @selector(viewDidAppear:), (IMP)&_logos_method$_ungrouped$UIAlertController$viewDidAppear$, (IMP*)&_logos_orig$_ungrouped$UIAlertController$viewDidAppear$);{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(UITableView *), strlen(@encode(UITableView *))); i += strlen(@encode(UITableView *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$UIAlertController, @selector(logViewHierarchy), (IMP)&_logos_method$_ungrouped$UIAlertController$logViewHierarchy, _typeEncoding); }} }
#line 92 "/Users/liudazhi/iosprojects/SettingAutoClickLibrary/SettingAutoClickLibrary/SettingAutoClickLibrary.xm"
