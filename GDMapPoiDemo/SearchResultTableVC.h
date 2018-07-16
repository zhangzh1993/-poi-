//
//  SearchResultTableVC.h
//  GDMapPoiDemo
//
//  Created by 张正浩 on 2018/5/31.
//  Copyright © 2018年 张正浩. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AMapPOI;

@protocol SearchResultTableVCDelegate <NSObject>

- (void)setSelectedLocationWithLocation:(AMapPOI *)poi;

@end

@interface SearchResultTableVC : UITableViewController 

- (void)setSearchCity:(NSString *)city;

@property (nonatomic, weak) id<SearchResultTableVCDelegate> delegate;

@end
