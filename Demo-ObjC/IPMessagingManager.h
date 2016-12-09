//
//  IPMessagingManager.h
//  Twilio IP Messaging Demo
//
//  Copyright (c) 2011-2016 Twilio. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <TwilioIPMessagingClient/TwilioIPMessagingClient.h>
#import <TwilioCommon/TwilioCommon.h>

@interface IPMessagingManager : NSObject

@property (nonatomic, strong, readonly) TwilioIPMessagingClient *client;

+ (instancetype)sharedManager;

- (void)presentRootViewController;
- (BOOL)hasIdentity;
- (BOOL)loginWithStoredIdentity;
- (BOOL)loginWithIdentity:(NSString *)identity;
- (void)logout;

- (void)updatePushToken:(NSData *)token;
- (void)receivedNotification:(NSDictionary *)notification;

- (NSString *)identity;

@end