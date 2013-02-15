/*
 * imap_err.c:
 * This file is automatically generated; please do not edit it.
 */

#include <stdlib.h>

static const char * const text[] = {
	   "System I/O error",
	   "Permission denied",
	   "Over quota",
	   "Too many user flags in mailbox",
	   "Mailbox has an invalid format",
	   "Operation is not supported on mailbox",
	   "Mailbox does not exist",
	   "Mailbox already exists",
	   "Invalid mailbox name",
	   "Mailbox is locked by POP server",
	   "Unknown/invalid partition",
	   "Invalid identifier",
	   "Message contains NUL characters",
	   "Message contains bare newlines",
	   "Message contains non-ASCII characters in headers",
	   "Message contains invalid header",
	   "Message has no header/body separator",
	   "Quota root does not exist",
	   "Unrecognized character set",
	   "Invalid user",
	   "Login incorrect",
	   "Anonymous login is not permitted",
	   "Unsupported quota resource",
	   "Mailbox is over quota",
	   "Mailbox is at %d%% of quota",
	   "Message %d no longer exists",
	   "Unable to checkpoint \\Seen state",
	   "Unable to preserve \\Seen state",
	   "LOGOUT received",
	   "Completed",
    0
};

struct error_table {
    char const * const * msgs;
    long base;
    int n_msgs;
};
struct et_list {
    struct et_list *next;
    const struct error_table * table;
};
extern struct et_list *_et_list;

const struct error_table et_imap_error_table = { text, -1904809472L, 30 };

static struct et_list link = { 0, 0 };

void initialize_imap_error_table_r(struct et_list **list);
void initialize_imap_error_table(void);

void initialize_imap_error_table(void) {
    initialize_imap_error_table_r(&_et_list);
}

/* For Heimdal compatibility */
void initialize_imap_error_table_r(struct et_list **list)
{
    struct et_list *et, **end;

    for (end = list, et = *list; et; end = &et->next, et = et->next)
        if (et->table->msgs == text)
            return;
    et = malloc(sizeof(struct et_list));
    if (et == 0) {
        if (!link.table)
            et = &link;
        else
            return;
    }
    et->table = &et_imap_error_table;
    et->next = 0;
    *end = et;
}
