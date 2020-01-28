 #!/bin/bash

 awk -F '[:]' '{print $5}'|grep " $1"|wc -l