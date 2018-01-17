//
//  JADimensionMacros.h
//  JAMacros
//
//  Created by Jacob_Liang on 2018/1/17.
//  Copyright © 2018年 312846421@qq.com. All rights reserved.
//

#ifndef JADimensionMacros_h
#define JADimensionMacros_h

//加上 JA 是因为防止引入的库带有同名宏，引起其他歧义
/**
 Screen Rect
 */
#pragma mark - Screen

#define JAScreenW [UIScreen mainScreen].bounds.size.width
#define JAScreenH [UIScreen mainScreen].bounds.size.height

/**
 Navbar
 */
//状态栏高度
#define JAStatusBarH  [[UIApplication sharedApplication] statusBarFrame].size.height
//导航栏高度
#define JANavBarH (self.navigationController.navigationBar.frame.size.height + JAStatusBarH)


#endif /* JADimensionMacros_h */
