//
//  LocationDetailVC.h
//  GDMapPlaceAroundDemo
//
//  Created by 张正浩 on 2018/5/31.
//  Copyright © 2018年 张正浩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LocationDetailVC : UIViewController

- (instancetype)initWithLatitude:(double)latitude
                       longitude:(double)longitude
                           title:(NSString *)title
                        position:(NSString *)position;

@end
