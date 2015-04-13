#import <Foundation/Foundation.h>
#import "SWGPermission.h"
#import "SWGObject.h"


@interface SWGSharingApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGSharingApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Share variable
 Share variable

 @param sharingData Sharing data
 

 return type: 
 */
-(NSNumber*) sharingPostWithCompletionBlock :(NSArray<SWGPermission>*) sharingData 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Removes access permissions for a given variable for a given user.
 Delete variable sharing

 @param sharingData Sharing data
 

 return type: 
 */
-(NSNumber*) sharingDeleteWithCompletionBlock :(NSArray<SWGPermission>*) sharingData 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get variable sharing details
 

 @param variableName Variable name
 

 return type: 
 */
-(NSNumber*) sharingVariableNameGetWithCompletionBlock :(NSString*) variableName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end