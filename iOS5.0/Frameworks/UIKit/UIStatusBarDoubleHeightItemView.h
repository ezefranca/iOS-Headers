/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView
{
    NSString *_contentsString;
    float _letterSpacing;
    BOOL _ellipsize;
}

- (float)extraRightPadding;
- (BOOL)usesSmallerTextFont;
- (id)contentsImageForStyle:(int)arg1;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)dealloc;

@end

