#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGOauthApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGOauthApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Authorize
 Ask the user if they want to allow a client applications to submit or obtain data from their QM  account.

 @param response_type Response type
 @param redirect_uri Redirect uri
 @param realm Realm
 @param client_id Client id
 @param scope Scope
 @param state State
 

 return type: 
 */
-(NSNumber*) oauth2AuthorizeGetWithCompletionBlock :(NSString*) response_type 
     redirect_uri:(NSString*) redirect_uri 
     realm:(NSString*) realm 
     client_id:(NSString*) client_id 
     scope:(NSString*) scope 
     state:(NSString*) state 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end