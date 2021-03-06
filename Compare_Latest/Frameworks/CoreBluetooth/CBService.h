/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CBPeripheral, CBUUID, NSArray, NSNumber;

@interface CBService : NSObject
{
    CBPeripheral *_peripheral;
    CBUUID *_UUID;
    _Bool _isPrimary;
    NSArray *_includedServices;
    NSArray *_characteristics;
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly, nonatomic) NSNumber *endHandle; // @synthesize endHandle=_endHandle;
@property(readonly, nonatomic) NSNumber *startHandle; // @synthesize startHandle=_startHandle;
@property(retain) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(retain) NSArray *includedServices; // @synthesize includedServices=_includedServices;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) CBUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;

@end

