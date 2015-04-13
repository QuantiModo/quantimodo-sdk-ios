#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SWGAdministrationApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGAdministrationApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 getCacheClear
 Clears the memcached cache for the units and some other things.

 

 return type: 
 */
-(NSNumber*) administrationCacheClearGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 getCorrelationsUpdate
 Recalculate correlations for a variable

 @param modifiedVariable Original name of variable for which correlations are to be calculated (varchar)
 @param userId ID for user for whom the correlations should be recalculated.
 

 return type: 
 */
-(NSNumber*) administrationCorrelationsUpdateGetWithCompletionBlock :(NSString*) modifiedVariable 
     userId:(NSNumber*) userId 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 getCorrelationsUpdateAllUsers
 Recalculates correlations for all variables, for all users.

 

 return type: 
 */
-(NSNumber*) administrationCorrelationsUpdateAllUsersGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 getCorrelationsUpdateAllVariables
 Updates the correlations for all variables for a given user.

 @param userId ID for user for whom the correlations should be recalculated. If empty, uses currently logged in user.
 

 return type: 
 */
-(NSNumber*) administrationCorrelationsUpdateAllVariablesGetWithCompletionBlock :(NSNumber*) userId 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end