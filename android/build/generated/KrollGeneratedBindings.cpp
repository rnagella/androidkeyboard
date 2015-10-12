/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "con.familydollar.androidkeyboard.ExampleProxy.h"
#include "con.familydollar.androidkeyboard.AndroidkeyboardModule.h"


#line 14 "/private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 10, duplicates = 0 */

class AndroidkeyboardBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AndroidkeyboardBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AndroidkeyboardBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 45,
      MAX_WORD_LENGTH = 54,
      MIN_HASH_VALUE = 45,
      MAX_HASH_VALUE = 54
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf"
      {"con.familydollar.androidkeyboard.ExampleProxy", ::con::familydollar::androidkeyboard::androidkeyboard::ExampleProxy::bindProxy, ::con::familydollar::androidkeyboard::androidkeyboard::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf"
      {"con.familydollar.androidkeyboard.AndroidkeyboardModule", ::con::familydollar::androidkeyboard::AndroidkeyboardModule::bindProxy, ::con::familydollar::androidkeyboard::AndroidkeyboardModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/0j/s3qlqx3d1x9fllxps82crzc80000gq/T/conrnagella/androidkeyboard-generated/KrollGeneratedBindings.gperf"

