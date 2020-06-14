pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmakeBuild buildDir: 'build', buildType: 'Release', generator: 'Unix Makefiles', installation: 'Default'
            }
        }
        stage('Test') {
            steps {
                dir("bin") {
                    sh label: '', script: 'for i in *test*; do ./$i; done'
                }
            }
        }
    }
}