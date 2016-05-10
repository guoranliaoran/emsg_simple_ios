//
//  ZXBaseRefreshViewController.h
//  EMsgDemo
//
//  Created by Hawk on 5/9/16.
//  Copyright © 2016 鹰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QYQBaseUIViewController.h"
#import "MJRefresh.h"

@interface ZXBaseRefreshViewController : QYQBaseUIViewController

@property (nonatomic,strong)UITableView * tableView;

- (void)beginRefresh;

- (void)updateUI;
- (void)loadData;
- (void)loadMoreData;

- (void)endRefreshAnimation;
- (void)endNoMoreDataRefresh;


@end
