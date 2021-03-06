/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBNewsstandShelfHeaderView, SBNewsstandTilingImageView;

@interface SBNewsstandShelfFrameView : UIView
{
    struct CGSize _borderSize;
    SBNewsstandShelfHeaderView *_headerView;
    SBNewsstandTilingImageView *_leftBorder;
    SBNewsstandTilingImageView *_rightBorder;
    int _orientation;
}

- (void)layoutSubviews;
- (void)configureForOrientation:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)showHeaderView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

