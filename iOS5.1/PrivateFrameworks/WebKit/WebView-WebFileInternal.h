/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebView.h>

@interface WebView (WebFileInternal)
+ (void)_setCacheModel:(unsigned int)arg1;
+ (unsigned int)_cacheModel;
+ (unsigned int)_didSetCacheModel;
+ (unsigned int)_maxCacheModelInAnyInstance;
+ (void)_preferencesChangedNotification:(id)arg1;
+ (void)_preferencesRemovedNotification:(id)arg1;
+ (void)_preflightSpellCheckerNow:(id)arg1;
+ (void)_preflightSpellChecker;
- (id)_focusedFrame;
- (BOOL)_isLoading;
- (id)_frameViewAtWindowPoint:(struct CGPoint)arg1;
- (BOOL)_continuousCheckingAllowed;
- (id)_responderForResponderOperations;
- (void)_clearLayerSyncLoopObserver;
@end
