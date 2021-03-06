//
//  FilteredMPIdentityApiRequest.h
//

#import <Foundation/Foundation.h>
#import "FilteredMParticleUser.h"

NS_ASSUME_NONNULL_BEGIN
@class MPIdentityApiRequest;

@interface FilteredMPIdentityApiRequest : NSObject

@property (nonatomic, strong, nullable, readonly) NSString *email;
@property (nonatomic, strong, nullable, readonly) NSString *customerId;
@property (nonatomic, strong, nullable, readonly) NSDictionary<NSNumber *, NSString *> *userIdentities;

- (instancetype)initWithIdentityRequest:(MPIdentityApiRequest *)request kitConfiguration:(MPKitConfiguration *)kitConfiguration;

@end

NS_ASSUME_NONNULL_END
