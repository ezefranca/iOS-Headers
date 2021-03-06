/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class SBBookmark;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

@property(retain, nonatomic) SBBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)webClip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBookmark:(id)arg1;

@end

