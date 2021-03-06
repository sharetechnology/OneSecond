//
//  OSHttpClient.h
//  OneSecond
//
//  Created by JunhuaRao on 15/11/23.
//  Copyright © 2015年 com.homeboy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OSServiceConfigManager.h"

/** success block */
typedef void (^OSHttpSuccessBlock)(id response, NSURLSessionDataTask *task);
/** failed block */
typedef void (^OSHttpFailedBlock)(NSURLSessionDataTask *task, NSError *error);

@interface OSHttpClient : NSObject

+ (OSHttpClient *)sharedInstanceWithClientType:(eHttpHostType)type;

- (NSURLSessionDataTask *)GET:(NSString *)path
 parameters:(NSDictionary *)parameters
    success:(OSHttpSuccessBlock)success
     failed:(OSHttpFailedBlock)failed;

@end
