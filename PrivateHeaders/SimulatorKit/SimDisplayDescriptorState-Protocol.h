//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SimulatorKit/FoundationXPCProtocolProxyable-Protocol.h>
#import <SimulatorKit/NSObject-Protocol.h>
#import <SimulatorKit/SimDeviceIOPortDescriptorState-Protocol.h>

@protocol SimDisplayDescriptorState <FoundationXPCProtocolProxyable, NSObject, SimDeviceIOPortDescriptorState>
@property (nonatomic, readonly) unsigned int defaultHeightForDisplay;
@property (nonatomic, readonly) unsigned int defaultWidthForDisplay;
@property (nonatomic, readonly) unsigned short displayClass;
@end
