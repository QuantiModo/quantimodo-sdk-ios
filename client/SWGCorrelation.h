#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGCorrelation
@end
  
@interface SWGCorrelation : SWGObject

/* Pearson correlation coefficient between cause and effect measurements 
 */
@property(nonatomic) NSNumber* correlationCoefficient;
/* ORIGINAL variable name of the cause variable for which the user desires correlations. 
 */
@property(nonatomic) NSString* cause;
/* ORIGINAL variable name of the effect variable for which the user desires correlations. 
 */
@property(nonatomic) NSString* effect;
/* User estimated or default time after cause measurement before a perceivable effect is observed 
 */
@property(nonatomic) NSNumber* onsetDelay;
/* Time over which the cause is expected to produce a perceivable effect following the onset delay 
 */
@property(nonatomic) NSNumber* durationOfAction;
/* Number of points that went into the correlation calculation 
 */
@property(nonatomic) NSNumber* numberOfPairs;
/* Magnitude of the effects of a cause indicating whether it's practically meaningful. [optional]
 */
@property(nonatomic) NSString<Optional>* effectSize;
/* A function of the effect size and sample size [optional]
 */
@property(nonatomic) NSString<Optional>* statisticalSignificance;
/* Time at which correlation was calculated 
 */
@property(nonatomic) NSNumber* timestamp;
/* Correlation when cause and effect are reversed. For any causal relationship, the forward correlation should exceed the reverse correlation. [optional]
 */
@property(nonatomic) NSNumber<Optional>* reverseCorrelation;
/*  [optional]
 */
@property(nonatomic) NSNumber<Optional>* causalityFactor;
/* Variable category of the cause variable. [optional]
 */
@property(nonatomic) NSString<Optional>* causeCategory;
/* Variable category of the effect variable. [optional]
 */
@property(nonatomic) NSString<Optional>* effectCategory;

@end
