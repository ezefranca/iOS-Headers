/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPlaceSearchResponse;

@interface GEOETAResult : PBCodable <NSCopying>
{
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    GEOPlaceSearchResponse *_placeSearchResponse;
    int _status;
    struct {
        unsigned int historicTravelTime:1;
        unsigned int liveTravelTime:1;
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) unsigned int liveTravelTime; // @synthesize liveTravelTime=_liveTravelTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlaceSearchResponse;
@property(nonatomic) _Bool hasHistoricTravelTime;
@property(nonatomic) _Bool hasLiveTravelTime;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)dealloc;

@end

