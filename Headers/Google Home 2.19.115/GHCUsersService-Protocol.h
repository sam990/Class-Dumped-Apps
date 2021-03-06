//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCAppSubscriptionRemoveRequest, GHCAppSubscriptionUpdateRequest, GHCCreateNestAccountRequest, GHCGetDeviceArbitrationConsentRequirementsRequest, GHCGetNestAccountLinkStateRequest, GHCGetUserPreferencesRequest, GHCGetUserSettingsRequest, GHCGetWwnAccountLinkStateRequest, GHCRegisterFcmMessagingRequest, GHCSetAssistantLanguagesRequest, GHCSetUserPreferencesRequest, GHCUnregisterFcmMessagingRequest, GRPCProtoCall;

@protocol GHCUsersService <NSObject>
- (GRPCProtoCall *)RPCToGetDeviceArbitrationConsentRequirementsWithRequest:(GHCGetDeviceArbitrationConsentRequirementsRequest *)arg1 handler:(void (^)(GHCGetDeviceArbitrationConsentRequirementsResponse *, NSError *))arg2;
- (void)getDeviceArbitrationConsentRequirementsWithRequest:(GHCGetDeviceArbitrationConsentRequirementsRequest *)arg1 handler:(void (^)(GHCGetDeviceArbitrationConsentRequirementsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToUnregisterFcmMessagingWithRequest:(GHCUnregisterFcmMessagingRequest *)arg1 handler:(void (^)(GHCUnregisterFcmMessagingResponse *, NSError *))arg2;
- (void)unregisterFcmMessagingWithRequest:(GHCUnregisterFcmMessagingRequest *)arg1 handler:(void (^)(GHCUnregisterFcmMessagingResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToRegisterFcmMessagingWithRequest:(GHCRegisterFcmMessagingRequest *)arg1 handler:(void (^)(GHCRegisterFcmMessagingResponse *, NSError *))arg2;
- (void)registerFcmMessagingWithRequest:(GHCRegisterFcmMessagingRequest *)arg1 handler:(void (^)(GHCRegisterFcmMessagingResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetWwnAccountLinkStateWithRequest:(GHCGetWwnAccountLinkStateRequest *)arg1 handler:(void (^)(GHCGetWwnAccountLinkStateResponse *, NSError *))arg2;
- (void)getWwnAccountLinkStateWithRequest:(GHCGetWwnAccountLinkStateRequest *)arg1 handler:(void (^)(GHCGetWwnAccountLinkStateResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToAppSubscriptionRemoveWithRequest:(GHCAppSubscriptionRemoveRequest *)arg1 handler:(void (^)(GHCAppSubscriptionRemoveResponse *, NSError *))arg2;
- (void)appSubscriptionRemoveWithRequest:(GHCAppSubscriptionRemoveRequest *)arg1 handler:(void (^)(GHCAppSubscriptionRemoveResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToAppSubscriptionUpdateWithRequest:(GHCAppSubscriptionUpdateRequest *)arg1 handler:(void (^)(GHCAppSubscriptionUpdateResponse *, NSError *))arg2;
- (void)appSubscriptionUpdateWithRequest:(GHCAppSubscriptionUpdateRequest *)arg1 handler:(void (^)(GHCAppSubscriptionUpdateResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCreateNestAccountWithRequest:(GHCCreateNestAccountRequest *)arg1 handler:(void (^)(GHCCreateNestAccountResponse *, NSError *))arg2;
- (void)createNestAccountWithRequest:(GHCCreateNestAccountRequest *)arg1 handler:(void (^)(GHCCreateNestAccountResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetNestAccountLinkStateWithRequest:(GHCGetNestAccountLinkStateRequest *)arg1 handler:(void (^)(GHCGetNestAccountLinkStateResponse *, NSError *))arg2;
- (void)getNestAccountLinkStateWithRequest:(GHCGetNestAccountLinkStateRequest *)arg1 handler:(void (^)(GHCGetNestAccountLinkStateResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToSetAssistantLanguagesWithRequest:(GHCSetAssistantLanguagesRequest *)arg1 handler:(void (^)(GHCSetAssistantLanguagesResponse *, NSError *))arg2;
- (void)setAssistantLanguagesWithRequest:(GHCSetAssistantLanguagesRequest *)arg1 handler:(void (^)(GHCSetAssistantLanguagesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToSetUserPreferencesWithRequest:(GHCSetUserPreferencesRequest *)arg1 handler:(void (^)(GHCSetUserPreferencesResponse *, NSError *))arg2;
- (void)setUserPreferencesWithRequest:(GHCSetUserPreferencesRequest *)arg1 handler:(void (^)(GHCSetUserPreferencesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetUserPreferencesWithRequest:(GHCGetUserPreferencesRequest *)arg1 handler:(void (^)(GHCGetUserPreferencesResponse *, NSError *))arg2;
- (void)getUserPreferencesWithRequest:(GHCGetUserPreferencesRequest *)arg1 handler:(void (^)(GHCGetUserPreferencesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetUserSettingsWithRequest:(GHCGetUserSettingsRequest *)arg1 handler:(void (^)(GHCGetUserSettingsResponse *, NSError *))arg2;
- (void)getUserSettingsWithRequest:(GHCGetUserSettingsRequest *)arg1 handler:(void (^)(GHCGetUserSettingsResponse *, NSError *))arg2;
@end

