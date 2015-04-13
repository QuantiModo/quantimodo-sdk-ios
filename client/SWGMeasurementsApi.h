#import <Foundation/Foundation.h>
#import "SWGMeasurementSource.h"
#import "SWGMeasurement.h"
#import "SWGMeasurementRange.h"
#import "SWGObject.h"


@interface SWGMeasurementsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGMeasurementsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Get measurement sources
 

 

 return type: 
 */
-(NSNumber*) measurementSourcesGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 Set measurement source
 Set measurement source

 @param Measurements An array of measurements you want to insert
 

 return type: 
 */
-(NSNumber*) measurementSourcesPostWithCompletionBlock :(NSArray<SWGMeasurementSource>*) Measurements 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get measurements for this user
 Get measurements for this user

 @param variableName Name of the variable you want measurements for
 @param unit The unit your want the measurements in
 @param startTime The lower limit of measurements returned (Epoch)
 @param endTime The upper limit of measurements returned (Epoch)
 @param groupingWidth The time (in seconds) over which measurements are grouped together
 @param groupingTimezone The time (in seconds) over which measurements are grouped together
 

 return type: 
 */
-(NSNumber*) measurementsGetWithCompletionBlock :(NSString*) variableName 
     unit:(NSString*) unit 
     startTime:(NSString*) startTime 
     endTime:(NSString*) endTime 
     groupingWidth:(NSNumber*) groupingWidth 
     groupingTimezone:(NSString*) groupingTimezone 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Set measurement
 Set measurement

 @param Measurements An array of measurements you want to insert
 

 return type: 
 */
-(NSNumber*) measurementsV2PostWithCompletionBlock :(NSArray<SWGMeasurement>*) Measurements 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get measurements range for this user
 Get timestamp of the user's first and last measurements taken.

 @param sources Enter source name to limit to specific source (varchar)
 @param user If not specified, uses currently logged in user (bigint)
 

 return type: 
 */
-(NSNumber*) measurementsRangeGetWithCompletionBlock :(NSString*) sources 
     user:(NSNumber*) user 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end