//
//  UIButton+XJTouchArea.h
//  project-name
//
//  Created by 薛见 on 16/11/18.
//  Copyright © 2016年 Gene. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (XJTouchArea)
/**
 *  扩充按钮的可点击区域
 *
 *  @param top    在button的frame的基础上往上扩充的距离
 *  @param right  在button的frame的基础上往右扩充的距离
 *  @param bottom 在button的frame的基础上往下扩充的距离
 *  @param left   在button的frame的基础上往左扩充的距离
 */
- (void)setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;

@end
