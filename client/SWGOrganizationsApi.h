#import <Foundation/Foundation.h>
#import "SWGUserTokenRequest.h"
#import "SWGUserTokenFailedResponse.h"
#import "SWGUserTokenSuccessfulResponse.h"
#import "SWGObject.h"


@interface SWGOrganizationsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGOrganizationsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Get user tokens for existing users, create new users
 Get user tokens for existing users, create new users

 @param organizationId Organization ID
 @param body Provides organization token and user ID
 

 return type: SWGUserTokenSuccessfulResponse*
 */
-(NSNumber*) v1OrganizationsOrganizationIdUsersPostWithCompletionBlock :(NSNumber*) organizationId 
     body:(SWGUserTokenRequest*) body 
    
    completionHandler: (void (^)(SWGUserTokenSuccessfulResponse* output, NSError* error))completionBlock;
    



@end