/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, CoreDAVMatchResultsItem, NSMutableArray, NSMutableSet;

@interface CoreDAVResponseItem : CoreDAVItem
{
    NSMutableArray *_hrefs;
    CoreDAVLeafItem *_status;
    NSMutableSet *_propStats;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
    CoreDAVItemWithHrefChildItem *_location;
    CoreDAVLeafItem *_serverUID;
    CoreDAVMatchResultsItem *_matchResults;
}

+ (id)copyParseRules;
@property(retain) CoreDAVMatchResultsItem *matchResults; // @synthesize matchResults=_matchResults;
@property(retain) CoreDAVLeafItem *serverUID; // @synthesize serverUID=_serverUID;
@property(retain) CoreDAVItemWithHrefChildItem *location; // @synthesize location=_location;
@property(retain) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *errorItem; // @synthesize errorItem=_errorItem;
@property(retain) NSMutableSet *propStats; // @synthesize propStats=_propStats;
@property(retain) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain) NSMutableArray *hrefs; // @synthesize hrefs=_hrefs;
- (_Bool)hasPropertyError;
- (id)successfulPropertiesToValues;
- (id)firstHref;
- (void)addHref:(id)arg1;
- (void)addPropStat:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

