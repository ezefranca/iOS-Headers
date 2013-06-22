/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IUSegmentedViewControllerDelegate <NSObject>

@optional
- (void)segmentedViewControllerShouldPopToRootViewController:(id)arg1;
- (void)segmentedViewController:(id)arg1 didSelectViewController:(id)arg2;
- (void)segmentedViewController:(id)arg1 willSelectViewController:(id)arg2;
- (BOOL)segmentedViewController:(id)arg1 canSelectViewController:(id)arg2;
- (id)segmentedControlForSegmentedViewController:(id)arg1;
@end
