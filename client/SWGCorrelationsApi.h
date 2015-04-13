#import <Foundation/Foundation.h>
#import "SWGCorrelation.h"
#import "SWGObject.h"


@interface SWGCorrelationsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGCorrelationsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Get correlations
 Get correlations

 @param effect ORIGINAL variable name of the effect variable for which the user desires correlations
 @param cause ORIGINAL variable name of the cause variable for which the user desires correlations
 

 return type: NSArray<SWGCorrelation>*
 */
-(NSNumber*) correlationsGetWithCompletionBlock :(NSString*) effect 
     cause:(NSString*) cause 
    
    completionHandler: (void (^)(NSArray<SWGCorrelation>* output, NSError* error))completionBlock;
    


/**

 Get average correlations for variables containing search term
 Returns the average correlations from all users for all public variables that contain the characters in the search query.

 @param search Search query
 @param effectOrCause Specifies whehter to return the effects or causes of the searched variable.
 

 return type: NSArray<SWGCorrelation>*
 */
-(NSNumber*) publicCorrelationsSearchSearchGetWithCompletionBlock :(NSString*) search 
     effectOrCause:(NSString*) effectOrCause 
    
    completionHandler: (void (^)(NSArray<SWGCorrelation>* output, NSError* error))completionBlock;
    



@end