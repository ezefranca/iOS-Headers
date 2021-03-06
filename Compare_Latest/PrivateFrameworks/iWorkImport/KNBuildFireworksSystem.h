/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDGLParticleSystem.h>

// Not exported
@interface KNBuildFireworksSystem : TSDGLParticleSystem
{
    CDStruct_03942939 _startingColorRGB;
    _Bool _didDrawCenterBurst;
    double _lifeSpanMinDuration;
    double _colorRandomness;
    CDStruct_083b1a49 _lifeSpan;
    double _maxDistance;
    double _fireworkStartingPositionX;
    struct CGSize _randomParticleSizeMinMax;
    struct CGPoint _randomParticleSpeedMinMax;
    struct CGPoint _startingPoint;
}

+ (_Bool)willOverrideColors;
+ (_Bool)willOverrideStartingPoints;
@property(readonly, nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
@property(nonatomic) _Bool didDrawCenterBurst; // @synthesize didDrawCenterBurst=_didDrawCenterBurst;
@property(nonatomic) double fireworkStartingPositionX; // @synthesize fireworkStartingPositionX=_fireworkStartingPositionX;
@property(nonatomic) struct CGPoint randomParticleSpeedMinMax; // @synthesize randomParticleSpeedMinMax=_randomParticleSpeedMinMax;
@property(nonatomic) struct CGSize randomParticleSizeMinMax; // @synthesize randomParticleSizeMinMax=_randomParticleSizeMinMax;
@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) CDStruct_b2fbf00d lifeSpan; // @synthesize lifeSpan=_lifeSpan;
@property(nonatomic) double colorRandomness; // @synthesize colorRandomness=_colorRandomness;
@property(nonatomic) double lifeSpanMinDuration; // @synthesize lifeSpanMinDuration=_lifeSpanMinDuration;
- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (double)speedMax;
- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(_Bool)arg3;

@end

