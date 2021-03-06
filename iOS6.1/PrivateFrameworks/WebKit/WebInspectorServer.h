/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebInspectorClientRegistryDelegate-Protocol.h"
#import "WebInspectorXPCWrapperDelegate-Protocol.h"

@class WebInspectorServerWebViewConnectionController, WebInspectorXPCWrapper;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate>
{
    BOOL _isEnabled;
    int _notifyToken;
    WebInspectorXPCWrapper *_xpcConnection;
    WebInspectorServerWebViewConnectionController *_connectionController;
}

- (void)didUnregisterClient:(struct WebInspectorClient *)arg1;
- (void)didRegisterClient:(struct WebInspectorClient *)arg1;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)pushListing;
- (void)setupXPCConnectionIfNeeded;
- (id)xpcConnection;
- (BOOL)isEnabled;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

