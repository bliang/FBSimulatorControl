//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSBundle, NSDictionary, NSString;

@interface SimDeviceType : NSObject
{
    float _mainScreenScale;
    unsigned int _minRuntimeVersion;
    unsigned int _maxRuntimeVersion;
    NSString *_name;
    NSString *_identifier;
    NSString *_modelIdentifier;
    NSBundle *_bundle;
    NSArray *_supportedArchs;
    NSArray *_supportedProductFamilyIDs;
    NSDictionary *_capabilities;
    NSString *_springBoardConfigName;
    NSString *_productClass;
    NSDictionary *_environment_extra;
    NSDictionary *_aliases;
    NSDictionary *_supportedFeatures;
    NSDictionary *_supportedFeaturesConditionalOnRuntime;
    struct CGSize _mainScreenSize;
    struct CGSize _mainScreenDPI;
}

+ (id)supportedDeviceTypesByName;
+ (id)supportedDeviceTypesByAlias;
+ (id)supportedDeviceTypesByIdentifier;
+ (id)supportedDeviceTypes;
+ (id)supportedDevices;
@property(copy) NSDictionary *supportedFeaturesConditionalOnRuntime; // @synthesize supportedFeaturesConditionalOnRuntime=_supportedFeaturesConditionalOnRuntime;
@property(copy) NSDictionary *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
@property(copy) NSDictionary *aliases; // @synthesize aliases=_aliases;
@property(copy) NSDictionary *environment_extra; // @synthesize environment_extra=_environment_extra;
@property(copy) NSString *productClass; // @synthesize productClass=_productClass;
@property(copy) NSString *springBoardConfigName; // @synthesize springBoardConfigName=_springBoardConfigName;
@property unsigned int maxRuntimeVersion; // @synthesize maxRuntimeVersion=_maxRuntimeVersion;
@property unsigned int minRuntimeVersion; // @synthesize minRuntimeVersion=_minRuntimeVersion;
@property struct CGSize mainScreenDPI; // @synthesize mainScreenDPI=_mainScreenDPI;
@property struct CGSize mainScreenSize; // @synthesize mainScreenSize=_mainScreenSize;
@property(copy) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property float mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property(copy) NSArray *supportedProductFamilyIDs; // @synthesize supportedProductFamilyIDs=_supportedProductFamilyIDs;
@property(copy) NSArray *supportedArchs; // @synthesize supportedArchs=_supportedArchs;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *name; // @synthesize name=_name;
- (Class)deviceClass;
- (long long)compare:(id)arg1;
- (BOOL)supportsFeatureConditionally:(id)arg1;
- (BOOL)supportsFeature:(id)arg1;
- (id)environmentForRuntime:(id)arg1;
- (id)environment;
@property(readonly, copy) NSString *productFamily;
@property(readonly) int productFamilyID;
- (id)description;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

