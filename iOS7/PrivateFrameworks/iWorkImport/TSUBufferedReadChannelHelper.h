/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSUStreamReadChannel-Protocol.h"

@class TSUBufferedReadChannel;

// Not exported
@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel *_bufferedReadChannel;
}

- (void).cxx_destruct;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (id)initWithBufferedReadChannel:(id)arg1;

@end

