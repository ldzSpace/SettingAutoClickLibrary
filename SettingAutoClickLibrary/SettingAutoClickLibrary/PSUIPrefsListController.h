//
//  Header.h
//  SettingAutoClickLibrary
//
//  Created by 刘大志 on 2017/7/24.
//
//

#ifndef Header_h
#define Header_h
@interface PSUIPrefsListController :UIViewController

@property(nonatomic,readonly)UITableView * table;

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

@end

#endif /* Header_h */
