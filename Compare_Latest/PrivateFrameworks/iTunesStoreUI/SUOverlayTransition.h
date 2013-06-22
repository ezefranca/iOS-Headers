/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSCoding, NSCopying>
{
    double _duration;
    SUDOMElement *_sourceElement;
    int _type;
}

+ (int)transitionTypeFromString:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) SUDOMElement *sourceElement; // @synthesize sourceElement=_sourceElement;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
