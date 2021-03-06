/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell
{
    _Bool _favorite;
    _Bool _suggested;
    _Bool _wantsSmallSuggestionIndicators;
    UIImage *_image;
    UIImageView *__thumbnailImageView;
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
}

@property(readonly, nonatomic) UIImageView *_suggestedImageView; // @synthesize _suggestedImageView=__suggestedImageView;
@property(readonly, nonatomic) UIImageView *_checkmarkImageView; // @synthesize _checkmarkImageView=__checkmarkImageView;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(nonatomic) _Bool wantsSmallSuggestionIndicators; // @synthesize wantsSmallSuggestionIndicators=_wantsSmallSuggestionIndicators;
@property(nonatomic, getter=isSuggested) _Bool suggested; // @synthesize suggested=_suggested;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_updateSuggestedView;
- (void)_updateFavoriteView;
- (void)_updateThumbnailImageView;
- (void)setSuggested:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFavorite:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUReviewScrubberCellInitialization;

@end

