//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_TtC6IDEKit30IDETestPlansListViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>

@interface _TtC6IDEKit30IDETestPlansListViewController (IDEKit) <DVTTableViewDelegate>
- (void)changeDefaultTestPlanButtonPressed:(id)arg1;
- (void)jumpButtonPressed:(id)arg1;
- (void)deleteButtonPressed:(id)arg1;
- (void)addNewTestPlan:(id)arg1;
- (void)addExistingTestPlan:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
@end

