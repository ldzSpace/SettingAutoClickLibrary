#import <UIKit/UIKit.h>
#import "PSUIPrefsListController.h"
#import "ClassUtil.h"

// 编译后才会自动变色
%hook PSUIPrefsListController

- (void)viewDidLoad {
	%orig;
	NSLog(@"=============tt=============>");
	//[ClassUtil showClassInfo:self isShow:YES];
	NSIndexPath *indexPath = [NSIndexPath indexPathForRow:1 inSection:3];
	[self tableView:self.table didSelectRowAtIndexPath: indexPath];
}


%end

%hook PSListController

- (void)viewDidAppear:(BOOL)animated {
	%orig;
	//[ClassUtil showClassInfo:self isShow:YES];
    NSString *selfClass = NSStringFromClass([self class]);
	NSLog(@"========================当前类名=>%@",selfClass);
	NSString * str = @"StoreSettingsController";
	if ([str isEqualToString:selfClass]) {
		NSLog(@"==================成功=========>");
		UITableView * table = [self logViewHierarchy];
		NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:0];
		//UITableView * table = [ClassUtil getPublicVarsFromKey:self fromKey:@"table"];
		if (table == nil){
			NSLog(@"==================nil=========>");
			return;
		}
		[self tableView:table didSelectRowAtIndexPath: indexPath];
	}
}

%new
- (UITableView *)logViewHierarchy {
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

%end

%hook UIAlertController

- (void)viewDidAppear:(BOOL)animated {
	%orig;
	NSLog(@"弹框已经弹出");
	//[ClassUtil showClassInfo:self isShow:YES];
	
	[self _actionSelected:self.actions[1]];
}

%new
- (UITableView *)logViewHierarchy {
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

%end


