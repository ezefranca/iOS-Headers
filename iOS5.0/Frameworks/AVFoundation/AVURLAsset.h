/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAsset.h>

@class AVURLAssetInternal, NSURL;

@interface AVURLAsset : AVAsset
{
    AVURLAssetInternal *_asset;
}

+ (void)initialize;
+ (id)_avfValidationPlist;
+ (void)_ensureAudiovisualTypes;
+ (id)audiovisualTypes;
+ (id)audiovisualMIMETypes;
+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (id)_assetInspectorLoader;
- (void)_setAssetInspectorLoader:(id)arg1;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)tracks;
- (void)_tracksDidChange;
- (struct __CFURL *)_URL;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)cancelLoading;
- (id)lyrics;

@end

