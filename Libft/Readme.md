# Libft
## Your very first own library

### Makefile /  libft.h
C 언어에서 헤더 파일(header file)은 주로 함수 선언, 매크로 정의, 구조체 및 타입 정의, 그리고 외부 변수를 선언하는 데 사용됩니다. 헤더 파일은 .h 확장자를 가지며, 일반적으로 소스 파일과 함께 사용되어 코드를 모듈화하고 재사용성을 높여 줍니다.
1. libft.h
libft.h는 헤더 파일로, libft라는 라이브러리의 함수들에 대한 선언이 포함된 파일입니다.
libft.h는 C 프로젝트에서 libft라는 라이브러리의 함수들에 대한 선언이 포함된 파일입니다.
2. Makefile
Makefile은 자동화된 빌드 시스템인 make 프로그램을 사용하여 소스 코드를 컴파일하고 실행 파일을 생성하는 데 필요한 명령을 정의한 파일입니다. Makefile은 프로젝트의 빌드를 효율적으로 관리하고, 변경된 파일만을 컴파일하여 시간을 절약하는 데 도움을 줍니다.


### Part 1 - Libc functions
● isalpha
문자가 알파벳(A-Z, a-z)인지 확인하는 함수입니다.
문자가 알파벳이면 true(0이 아닌 값), 아니면 false(0)을 반환합니다.

● isdigit
문자가 숫자(0-9)인지 확인하는 함수입니다
문자가 숫자이면 true(0이 아닌 값), 아니면 false(0)을 반환합니다.

● isalnum
문자가 알파벳 또는 숫자인지 확인하는 함수입니다.
문자가 알파벳 또는 숫자이면 true(0이 아닌 값), 아니면 false(0)을 반환합니다.

● isascii
문자가 ASCII 문자(0-127 범위)에 속하는지 확인하는 함수입니다.
문자가 ASCII 문자 범위에 속하면 true(0이 아닌 값), 아니면 false(0)을 반환합니다.

● isprint
문자가 출력 가능한 문자(공백을 포함한 그래픽 문자)인지 확인하는 함수입니다.
출력 가능한 문자이면 true(0이 아닌 값), 아니면 false(0)을 반환합니다.

● strlen
문자열의 길이를 구하는 함수입니다.
문자열의 길이(널 문자('\0')를 제외한 문자 수)를 반환합니다.

● memset
메모리 블록을 지정된 값으로 설정하는 함수입니다.
설정된 메모리 블록의 포인터를 반환합니다.

● bzero
지정된 메모리 블록을 0으로 초기화하는 함수입니다.
반환 값 없음. 메모리 블록을 0으로 설정합니다.

● memcpy
한 메모리 블록을 다른 메모리 블록으로 복사하는 함수입니다.
복사된 대상 메모리 블록의 포인터를 반환합니다.

● memmove
메모리 블록을 안전하게 복사하는 함수입니다. 겹치는 메모리 구간에도 안전하게 동작합니다.
복사된 대상 메모리 블록의 포인터를 반환합니다.

● strlcpy
안전하게 문자열을 복사하는 함수입니다. 대상 버퍼의 크기를 지정할 수 있어 버퍼 오버플로우를 방지할 수 있습니다.
복사된 문자열의 길이를 반환합니다.

● strlcat
안전하게 문자열을 덧붙이는 함수입니다. strlcpy와 비슷하지만 문자열을 이어 붙이는 용도로 사용됩니다.
덧붙인 후의 전체 문자열 길이를 반환합니다.

● toupper
문자를 대문자로 변환하는 함수입니다.
대문자로 변환된 문자를 반환합니다. 대문자로 변환할 수 없으면 원래 문자 반환합니다.

● tolower
문자를 소문자로 변환하는 함수입니다.
소문자로 변환된 문자를 반환합니다. 소문자로 변환할 수 없으면 원래 문자 반환합니다.

● strchr
문자열에서 특정 문자를 찾는 함수입니다. 처음으로 나타나는 해당 문자의 위치를 반환합니다.
해당 문자가 처음 나타나는 위치의 포인터를 반환합니다. 없으면 NULL을 반환합니다.

● strrchr
문자열에서 특정 문자를 찾되, 마지막으로 나타나는 문자의 위치를 반환하는 함수입니다.
해당 문자가 마지막으로 나타나는 위치의 포인터를 반환합니다. 없으면 NULL을 반환합니다.

● strncmp
두 문자열을 지정된 길이만큼 비교하는 함수입니다.
두 문자열의 길이 차 만큼 반환합니다.

● memchr
메모리 블록에서 특정 값을 찾는 함수입니다.
해당 값이 처음 나타나는 위치의 포인터를 반환합니다. 없으면 NULL을 반환합니다.

● memcmp
두 메모리 블록을 비교하는 함수입니다.
두 블록이 동일하면 0, 다르면 차이를 반환합니다.

● strnstr
문자열 내에서 지정된 길이만큼 찾는 함수입니다. 주어진 문자열에서 검색 대상이 있는지 확인합니다.
찾은 위치의 포인터를 반환합니다. 없으면 NULL을 반환합니다.

● atoi
문자열을 정수로 변환하는 함수입니다.
변환된 정수를 반환합니다. 숫자가 아닌 값이 포함되면 변환을 중단하고 0을 반환합니다.