#! /bin/bash

Help() {
echo
"qtWGCNA.sh example:
 bash qtWGCNA.sh -c cmd -d work_dir
"
}

                                   
usage() {                                      # Function: Print a help message.
  echo "Usage: $0 [ -h help] [ -c cmd ] [ -d work_dir]" 1>&2
}
exit_abnormal() {                              # Function: Exit with error.
  usage
  exit 1
}


while getopts ":h:c:d:" options; do              
                                                                                           
  case "${options}" in
    h|:)
      usage
      Help
      exit 0
      ;;
    c)                                         
      cmd=${OPTARG}
      if ! [[ -n $cmd ]] ; then                      
        echo "You didn't input the cmd"                                
      fi                          
      ;;
    d)                                         
      work_dir=${OPTARG}
      if ! [[ -n $work_dir ]] ; then                      
        echo "You didn't input the work_dir"                                
      fi                          
      ;;
    \?) # incorrect option
      echo "Error: -${OPTARG} Invalid option"
      exit_abnormal
      ;;
  esac
done

shift $(($OPTIND - 1))
date  ## echo the date at start

echo "iterativeWGCNA running is done"
eval $cmd
cat ${work_dir}/iterativeWGCNA.log
mupdf-x11 ${work_dir}/final-kme_histogram.pdf