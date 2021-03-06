/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RCControlsViewDelegate-Protocol.h"
#import "RCWaveformGeneratorSegmentOutputObserver-Protocol.h"
#import "RCWaveformViewDelegate-Protocol.h"

@class NSString, RCControlsView, RCGLWaveformViewController, UIBarButtonItem, UIColor, UIFont, UILabel;

@interface RCMemoPlaybackViewController : UIViewController <RCWaveformGeneratorSegmentOutputObserver, RCControlsViewDelegate, RCWaveformViewDelegate>
{
    _Bool _initWithNibNameOK;
    _Bool _animateNextLayout;
    _Bool _screenUpdatesDisabled;
    UILabel *_timeDisplayLabel;
    UIFont *_timeDisplayLabelFont;
    UILabel *_recordingNameLabel;
    UIFont *_recordingNameLabelFont;
    UILabel *_recordingDateLabel;
    UIFont *_recordingDateLabelFont;
    double _preferredTimeWidth;
    _Bool _playing;
    long long _controlsConfiguration;
    id <RCWaveformDataSource> _waveformDataSource;
    id <RCMemoPlaybackViewControllerDelegate> _memoControllerDelegate;
    double _currentTime;
    double _duration;
    UIColor *_backgroundColor;
    long long _timeDisplayType;
    RCGLWaveformViewController *_waveformViewController;
    RCControlsView *_controlsView;
    UIBarButtonItem *_rightNavigationButtonItem;
    UIBarButtonItem *_leftNavigationButtonItem;
    unsigned long long _dismissOptions;
}

@property(nonatomic) unsigned long long dismissOptions; // @synthesize dismissOptions=_dismissOptions;
@property(retain, nonatomic) UIBarButtonItem *leftNavigationButtonItem; // @synthesize leftNavigationButtonItem=_leftNavigationButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightNavigationButtonItem; // @synthesize rightNavigationButtonItem=_rightNavigationButtonItem;
@property(readonly, nonatomic) RCControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(readonly, nonatomic) RCGLWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(retain, nonatomic) UILabel *recordingDateLabel; // @synthesize recordingDateLabel=_recordingDateLabel;
@property(retain, nonatomic) UILabel *recordingNameLabel; // @synthesize recordingNameLabel=_recordingNameLabel;
@property(nonatomic) long long timeDisplayType; // @synthesize timeDisplayType=_timeDisplayType;
@property(retain, nonatomic) UILabel *timeDisplayLabel; // @synthesize timeDisplayLabel=_timeDisplayLabel;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) __weak id <RCMemoPlaybackViewControllerDelegate> memoControllerDelegate; // @synthesize memoControllerDelegate=_memoControllerDelegate;
@property(readonly, nonatomic) id <RCWaveformDataSource> waveformDataSource; // @synthesize waveformDataSource=_waveformDataSource;
- (void).cxx_destruct;
- (void)_layoutViews;
- (void)_updateTimeViews;
- (void)controlsViewDidChooseDone:(id)arg1;
- (void)controlsViewDidChoosePausePlaying:(id)arg1;
- (void)controlsViewDidChooseStartPlaying:(id)arg1;
- (void)controlsViewDidChoosePauseRecording:(id)arg1;
- (void)controlsViewDidChooseStartRecording:(id)arg1;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)didUpdateWaveform;
- (void)didFinishLoadingWaveform;
- (void)willBeginLoadingWaveform;
- (void)waveformViewControllerDidChangeSelectedTimeRange:(id)arg1;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2;
- (void)_recordingNameLabelAction:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dismiss;
- (void)cancelEditing;
- (void)commitEditing;
- (id)navigationItem;
- (void)updateNavigationItem;
@property(nonatomic) long long controlsConfiguration; // @synthesize controlsConfiguration=_controlsConfiguration;
@property(readonly, nonatomic) long long defaultControlsConfiguration;
@property(retain, nonatomic) NSString *recordingDateText;
@property(retain, nonatomic) NSString *recordingNameText;
@property(nonatomic) _Bool controlsHidden;
- (void)setControlsConfiguration:(long long)arg1 animate:(_Bool)arg2;
- (void)_setWaveformDataSource:(id)arg1 currentTime:(double)arg2;
@property(nonatomic) _Bool screenUpdatesDisabled;
- (id)initWithWaveformDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

