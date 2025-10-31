#pragma once

#ifndef likely
#define likely(x) \
	(x) [[likely]]
#endif // likely

#ifndef unlikely
#define unlikely(x) \
	(x) [[unlikely]]
#endif // unlikely
