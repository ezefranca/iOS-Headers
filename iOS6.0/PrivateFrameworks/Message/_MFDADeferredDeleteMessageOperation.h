/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/MFOfflineCacheOperation.h>

#import "MFDAOfflineCacheOperation-Protocol.h"

@class NSString;

@interface _MFDADeferredDeleteMessageOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSString *_messageID;
}

- (id)description;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeleteMessageRequest:(id)arg1;

@end

