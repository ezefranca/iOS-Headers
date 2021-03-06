/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "MPAudioDeviceControllerDelegate-Protocol.h"

@class MPAudioDeviceController, NSArray;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAudioDeviceController *_audioDeviceController;
    unsigned long long _avItemType;
    _Bool _displayMirroringRoutes;
    NSArray *_displayedRoutes;
    _Bool _wirelessDisplayCapableRouteIsPicked;
    _Bool _wirelessDisplayRouteIsPendingAsPicked;
}

+ (id)routesPreferringMirroring;
@property(readonly, nonatomic) MPAudioDeviceController *audioDeviceController; // @synthesize audioDeviceController=_audioDeviceController;
- (void).cxx_destruct;
- (_Bool)_wirelessDisplayCapableRouteIsPicked;
- (id)_pickedRoute;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(long long *)arg1;
- (id)_displayedRoutes;
- (id)_availableRoutes;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (void)_debugButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 displayMirroringRoutes:(_Bool)arg2;

@end

