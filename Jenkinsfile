pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmakeBuild buildDir: 'build', buildType: 'Release', generator: 'Unix Makefiles', installation: 'Default', steps: [[]]
            }
        }
        stage('Test') {
            steps {
                dir("bin") {
                    sh "for i in *test*; do ./$i; done"
                }
            }
        }
    }
}