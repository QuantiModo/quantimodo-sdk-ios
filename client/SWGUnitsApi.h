#import <Foundation/Foundation.h>
#import "SWGUnitCategory.h"
#import "SWGUnit.h"
#import "SWGObject.h"


@interface SWGUnitsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGUnitsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Get unit categories
 

 

 return type: 
 */
-(NSNumber*) unitCategoriesGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 Get all available units
 Get all available units

 @param unitName Unit name
 @param abbreviatedUnitName Unit abbreviation
 @param categoryName Unit category
 

 return type: 
 */
-(NSNumber*) unitsGetWithCompletionBlock :(NSString*) unitName 
     abbreviatedUnitName:(NSString*) abbreviatedUnitName 
     categoryName:(NSString*) categoryName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get all available units for variable
 Get all available units for variable

 @param variable Variable name
 @param unitName Unit name
 @param cabbreviatedUnitName Unit abbreviation
 @param categoryName Unit category
 

 return type: 
 */
-(NSNumber*) unitsVariableGetWithCompletionBlock :(NSString*) variable 
     unitName:(NSString*) unitName 
     cabbreviatedUnitName:(NSString*) cabbreviatedUnitName 
     categoryName:(NSString*) categoryName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end