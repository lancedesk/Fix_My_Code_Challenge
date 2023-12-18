{"payload":{"allShortcutsEnabled":false,"fileTree":{"4-delete_dnodeint":{"items":[{"name":"add_dnodeint_end.c","path":"4-delete_dnodeint/add_dnodeint_end.c","contentType":"file"},{"name":"delete_dnodeint_at_index.c","path":"4-delete_dnodeint/delete_dnodeint_at_index.c","contentType":"file"},{"name":"free_dlistint.c","path":"4-delete_dnodeint/free_dlistint.c","contentType":"file"},{"name":"lists.h","path":"4-delete_dnodeint/lists.h","contentType":"file"},{"name":"main.c","path":"4-delete_dnodeint/main.c","contentType":"file"},{"name":"print_dlistint.c","path":"4-delete_dnodeint/print_dlistint.c","contentType":"file"}],"totalCount":6},"":{"items":[{"name":"4-delete_dnodeint","path":"4-delete_dnodeint","contentType":"directory"},{"name":"0-fizzbuzz.py","path":"0-fizzbuzz.py","contentType":"file"},{"name":"1-print_square.js","path":"1-print_square.js","contentType":"file"},{"name":"2-sort.rb","path":"2-sort.rb","contentType":"file"},{"name":"3-user.py","path":"3-user.py","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":6}},"fileTreeProcessingTime":3.400928,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":100750922,"defaultBranch":"master","name":"0x00-Fix_My_Code_Challenge","ownerLogin":"alx-tools","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2017-08-18T21:18:58.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/13408012?v=4","public":true,"private":false,"isOrgOwned":true},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1503091170.0","canEdit":false,"refType":"branch","currentOid":"393b1b05cb31214a1c7799488033c6e2ed4836ad"},"path":"4-delete_dnodeint/lists.h","currentUser":null,"blob":{"rawLines":["#ifndef _LISTS_H_","#define _LISTS_H_","","#include <stddef.h>","","/**"," * struct dlistint_s - doubly linked list"," * @n: integer"," * @prev: points to the prev node"," * @next: points to the next node"," *"," * Description: doubly linked list node structure"," * for Holberton project"," */","typedef struct dlistint_s","{","\tint n;","\tstruct dlistint_s *prev;","\tstruct dlistint_s *next;","} dlistint_t;","","size_t print_dlistint(const dlistint_t *h);","dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);","int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);","void free_dlistint(dlistint_t *head);","","#endif"],"stylingDirectives":[[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":17,"cssClass":"pl-s1"}],[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":17,"cssClass":"pl-s1"}],[],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":41,"cssClass":"pl-c"}],[{"start":0,"end":14,"cssClass":"pl-c"}],[{"start":0,"end":33,"cssClass":"pl-c"}],[{"start":0,"end":33,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":49,"cssClass":"pl-c"}],[{"start":0,"end":24,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-k"},{"start":15,"end":25,"cssClass":"pl-smi"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":6,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":24,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":18,"cssClass":"pl-smi"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":24,"cssClass":"pl-c1"}],[{"start":2,"end":12,"cssClass":"pl-smi"}],[],[{"start":0,"end":6,"cssClass":"pl-smi"},{"start":7,"end":21,"cssClass":"pl-en"},{"start":22,"end":27,"cssClass":"pl-k"},{"start":28,"end":38,"cssClass":"pl-smi"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":40,"end":41,"cssClass":"pl-s1"}],[{"start":0,"end":10,"cssClass":"pl-smi"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":28,"cssClass":"pl-en"},{"start":29,"end":39,"cssClass":"pl-smi"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":41,"end":42,"cssClass":"pl-c1"},{"start":42,"end":46,"cssClass":"pl-s1"},{"start":48,"end":53,"cssClass":"pl-k"},{"start":54,"end":57,"cssClass":"pl-smi"},{"start":58,"end":59,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":28,"cssClass":"pl-en"},{"start":29,"end":39,"cssClass":"pl-smi"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":41,"end":42,"cssClass":"pl-c1"},{"start":42,"end":46,"cssClass":"pl-s1"},{"start":48,"end":60,"cssClass":"pl-smi"},{"start":57,"end":60,"cssClass":"pl-smi"},{"start":61,"end":66,"cssClass":"pl-s1"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":18,"cssClass":"pl-en"},{"start":19,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":35,"cssClass":"pl-s1"}],[],[{"start":0,"end":6,"cssClass":"pl-k"}]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/alx-tools/0x00-Fix_My_Code_Challenge/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/alx-tools/0x00-Fix_My_Code_Challenge/security/dependabot","repoSecurityAndAnalysisPath":"/alx-tools/0x00-Fix_My_Code_Challenge/settings/security_analysis","repoOwnerIsOrg":true,"currentUserCanAdminRepo":false},"displayName":"lists.h","displayUrl":"https://github.com/alx-tools/0x00-Fix_My_Code_Challenge/blob/master/4-delete_dnodeint/lists.h?raw=true","headerInfo":{"blobSize":"592 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"c4870ec","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Falx-tools%2F0x00-Fix_My_Code_Challenge%2Fblob%2Fmaster%2F4-delete_dnodeint%2Flists.h","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"27","truncatedSloc":"23"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/alx-tools/0x00-Fix_My_Code_Challenge/discussions/new","newIssuePath":"/alx-tools/0x00-Fix_My_Code_Challenge/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/alx-tools/0x00-Fix_My_Code_Challenge/blob/master/4-delete_dnodeint/lists.h","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/alx-tools/0x00-Fix_My_Code_Challenge/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/alx-tools/0x00-Fix_My_Code_Challenge/raw/master/4-delete_dnodeint/lists.h","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"alx-tools","repoName":"0x00-Fix_My_Code_Challenge","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"_LISTS_H_","kind":"macro","identStart":26,"identEnd":35,"extentStart":18,"extentEnd":37,"fullyQualifiedName":"_LISTS_H_","identUtf16":{"start":{"lineNumber":1,"utf16Col":8},"end":{"lineNumber":1,"utf16Col":17}},"extentUtf16":{"start":{"lineNumber":1,"utf16Col":0},"end":{"lineNumber":3,"utf16Col":0}}},{"name":"dlistint_s","kind":"class","identStart":284,"identEnd":294,"extentStart":277,"extentEnd":358,"fullyQualifiedName":"dlistint_s","identUtf16":{"start":{"lineNumber":14,"utf16Col":15},"end":{"lineNumber":14,"utf16Col":25}},"extentUtf16":{"start":{"lineNumber":14,"utf16Col":8},"end":{"lineNumber":19,"utf16Col":1}}},{"name":"dlistint_t","kind":"type","identStart":359,"identEnd":369,"extentStart":269,"extentEnd":370,"fullyQualifiedName":"dlistint_t","identUtf16":{"start":{"lineNumber":19,"utf16Col":2},"end":{"lineNumber":19,"utf16Col":12}},"extentUtf16":{"start":{"lineNumber":14,"utf16Col":0},"end":{"lineNumber":19,"utf16Col":13}}},{"name":"print_dlistint","kind":"function","identStart":379,"identEnd":393,"extentStart":379,"extentEnd":414,"fullyQualifiedName":"print_dlistint","identUtf16":{"start":{"lineNumber":21,"utf16Col":7},"end":{"lineNumber":21,"utf16Col":21}},"extentUtf16":{"start":{"lineNumber":21,"utf16Col":7},"end":{"lineNumber":21,"utf16Col":42}}},{"name":"add_dnodeint_end","kind":"function","identStart":428,"identEnd":444,"extentStart":428,"extentEnd":476,"fullyQualifiedName":"add_dnodeint_end","identUtf16":{"start":{"lineNumber":22,"utf16Col":12},"end":{"lineNumber":22,"utf16Col":28}},"extentUtf16":{"start":{"lineNumber":22,"utf16Col":12},"end":{"lineNumber":22,"utf16Col":60}}},{"name":"delete_dnodeint_at_index","kind":"function","identStart":482,"identEnd":506,"extentStart":482,"extentEnd":545,"fullyQualifiedName":"delete_dnodeint_at_index","identUtf16":{"start":{"lineNumber":23,"utf16Col":4},"end":{"lineNumber":23,"utf16Col":28}},"extentUtf16":{"start":{"lineNumber":23,"utf16Col":4},"end":{"lineNumber":23,"utf16Col":67}}},{"name":"free_dlistint","kind":"function","identStart":552,"identEnd":565,"extentStart":552,"extentEnd":583,"fullyQualifiedName":"free_dlistint","identUtf16":{"start":{"lineNumber":24,"utf16Col":5},"end":{"lineNumber":24,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":24,"utf16Col":5},"end":{"lineNumber":24,"utf16Col":36}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/alx-tools/0x00-Fix_My_Code_Challenge/branches":{"post":"CDnuyezCjLFydxlqJJdbk4TEOyKpbw3GNUYo9icAh4phYiWL3GErL-YZkiLbwEVsxlaBjbYcghnLHkO3b4MkJg"},"/repos/preferences":{"post":"bFQlvAxCyt9jFDibYUC4xhyhIz9P0Xv7wsbj2nftAHccSvFNRcaD9qjCmYfDva4bst1cdv4pBBLh6KlVnBxXbg"}}},"title":"0x00-Fix_My_Code_Challenge/4-delete_dnodeint/lists.h at master · alx-tools/0x00-Fix_My_Code_Challenge"}