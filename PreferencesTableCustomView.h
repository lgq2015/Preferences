@protocol PreferencesTableCustomView
- (id)initWithSpecifier:(id)specifier;
@optional
- (float)preferredHeightForWidth:(float)width;
- (float)preferredHeightForWidth:(float)width inTableView:(id)tableView;
@end