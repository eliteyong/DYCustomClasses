//
//  UIButton+DYCustom.h
//  DYCustomClasses
//
//  Created by admin on 2018/4/4.
//  Copyright © 2018年 YDY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (DYCustom)

+ (instancetype)buttonWithTarget:(id)target action:(SEL)action;

+ (instancetype)buttonWithTitle:(NSString *)title titleLabelFont:(UIFont *)font titleColor:(UIColor *)titleColor backgroundColor:(UIColor *)backgroundColor target:(id)target action:(SEL)action;

+ (instancetype)buttonWithFrame:(CGRect)frame title:(NSString *)title titleLabelFont:(UIFont *)font titleColor:(UIColor *)titleColor backgroundColor:(UIColor *)backgroundColor target:(id)target action:(SEL)action;

+ (instancetype)buttonWithFrame:(CGRect)frame image:(UIImage *)image selectedImage:(UIImage *)selectedImage target:(id)target action:(SEL)action;

@end
