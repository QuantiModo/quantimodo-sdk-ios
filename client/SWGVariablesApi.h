#import <Foundation/Foundation.h>
#import "SWGVariable.h"
#import "SWGVariableCategory.h"
#import "SWGVariableUserSettings.h"
#import "SWGObject.h"


@interface SWGVariablesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGVariablesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Get public variables
 Get public variables

 

 return type: 
 */
-(NSNumber*) publicVariablesGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 Get top 5 PUBLIC variables with the most correlations
 Get top 5 PUBLIC variables with the most correlations containing the entered search characters. For example, search for 'mood' as an effect. Since 'Overall Mood' has a lot of correlations with other variables, it should be in the autocomplete list.

 @param search Search query
 @param effectOrCause Allows us to specify which column in the `correlations` table will be searched. Choices are effect or cause.
 

 return type: 
 */
-(NSNumber*) publicVariablesSearchSearchGetWithCompletionBlock :(NSString*) search 
     effectOrCause:(NSString*) effectOrCause 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get variable categories
 The variable categories include Activity, Causes of Illness, Cognitive Performance, Conditions, Environment, Foods, Location, Miscellaneous, Mood, Nutrition, Physical Activity, Physique, Sleep, Social Interactions, Symptoms, Treatments, Vital Signs, and Work.

 

 return type: 
 */
-(NSNumber*) variableCategoriesGetWithCompletionBlock :
    
    (void (^)(NSError* error))completionBlock;


/**

 Change variable user setting
 Change variable user setting

 @param sharingData Variable user settings data
 

 return type: 
 */
-(NSNumber*) variableUserSettingsPostWithCompletionBlock :(NSArray<SWGVariableUserSettings>*) sharingData 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get variables by the category name
 Get variables by the category name

 @param userId User id
 @param categoryName Category name
 

 return type: 
 */
-(NSNumber*) variablesGetWithCompletionBlock :(NSNumber*) userId 
     categoryName:(NSString*) categoryName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Set variable
 Allows the client to create a new variable in the `variables` table.

 @param variableName Original name for the variable.
 

 return type: 
 */
-(NSNumber*) variablesPostWithCompletionBlock :(NSArray<SWGVariable>*) variableName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get variables by search query
 Get variables containing the search characters. Used to provide auto-complete function in variable search boxes.

 @param search Search query
 @param categoryName Filter variables by category name.
 @param source Filter variables by source name.
 @param limit Search limit
 @param offset Search offset
 

 return type: 
 */
-(NSNumber*) variablesSearchSearchGetWithCompletionBlock :(NSString*) search 
     categoryName:(NSString*) categoryName 
     source:(NSString*) source 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get info about a variable
 Get all of the settings and information about a variable by name

 @param variableName Variable name
 @param categoryName categoryName` parameter allows us to filter the variables so that only ones from the specified category are returned.
 

 return type: 
 */
-(NSNumber*) variablesVariableNameGetWithCompletionBlock :(NSString*) variableName 
     categoryName:(NSString*) categoryName 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end