/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, NSString, UIActivity, UIActivityListViewController;

@interface UIActivityViewController : UIViewController
{
    NSArray *_excludedActivityTypes;
    NSOperationQueue *_activityItemProviderOperationQueue;
    UIActivityListViewController *_activityListViewController;
    UIActivity *_activity;
    NSArray *_activityItems;
    Class _originalPopoverBackgroundViewClass;
    NSArray *_applicationActivities;
    int _originalPopoverBackgroundStyle;
    NSString *_subject;
    unsigned int _backgroundTaskIdentifier;
    BOOL _useBlackPopoverStyle;
    int _completedProviderCount;
    id _completionHandler;
    int _totalProviderCount;
}

+ (BOOL)_hasSystemActivityForActivityItems:(id)arg1;
+ (id)_builtinActivities;
@property(nonatomic) int totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property(nonatomic) BOOL useBlackPopoverStyle; // @synthesize useBlackPopoverStyle=_useBlackPopoverStyle;
@property(nonatomic) unsigned int backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) int originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) UIActivityListViewController *activityListViewController; // @synthesize activityListViewController=_activityListViewController;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
- (void)_cancel;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_reloadImageForActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_executeActivity;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_hideView;
- (struct CGSize)contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)_availableActivities;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)_activityItemValues;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

